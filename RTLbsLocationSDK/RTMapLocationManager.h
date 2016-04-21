//
//  RTMapLocationManager.h
//
//
//  Created by zhaoyubin on 15/6/12.
//  Copyright (c) 2015年 rtmap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@protocol RTMapLocationManagerDelegate;
@class IbeaconLocation;

///ibeacon 定位管理类
@interface RTMapLocationManager : NSObject
/*!
 @property
 @abstract ibeacon 定位协议。
 */
@property (nonatomic,weak) id<RTMapLocationManagerDelegate>delegate;

/*!
 @property
 @abstract 是否使用测试服务器。
 */
@property(nonatomic,assign)BOOL isTestAPI;
/*!
 @property
 @abstract 定位频率(多少秒返回1次),默认位1秒/次。
 */
@property(nonatomic,assign)NSInteger  locationFreq;
/*!
 @property
 @abstract 地图偏转角
 */
@property(nonatomic,assign)NSInteger  mapAngle;

/*!
 @method
 @abstract  初始化
 @result void
 */
+(RTMapLocationManager *)sharedInstance;

/*!
 @method
 @abstract  开始定位
 @result void
 */
- (void) startUpdatingLocation;

/*!
 @method
 @abstract  停止定位
 @result void
 */
-(void) stopUpdatingLocation;
/*!
 @method
 @abstract  获取定位点附近的POI信息
 @param locate 定位点信息对象，若为nil，则使用最新的定位点
 @result void
 */
-(void) getLocatePoiInfo:(IbeaconLocation *)locate;

/*!
 @method
 @abstract  更新建筑物判断数据
 @result void
 */
-(void) updateBuildJudge;

/*!
 @method
 @abstract  更新指定建筑的指纹数据
 @param buildid 建筑物ID
 @result void
 */
-(void) updateFinger:(NSString *) buildid;
@end

///ibeacon 定位点类,用于描述一个位置,建筑物-楼层-坐标
@interface IbeaconLocation : NSObject

/*!
 @property
 @abstract 建筑物ID。
 */
@property (nonatomic,strong) NSString  *buildID;

/*!
 @property
 @abstract 楼层ID。
 */
@property (nonatomic,strong) NSString  *floorID;

/*!
 @property
 @abstract 定位点X坐标。
 */
@property (nonatomic,assign) float      location_x;

/*!
 @property
 @abstract 定位点Y坐标。
 */
@property (nonatomic,assign) float      location_y;

/*!
 @property
 @abstract 错误码
 */
@property (nonatomic,assign) int         error;
/*!
 @property
 @abstract 定位类型(beacon信号或PDR推算)
 */
@property (nonatomic,copy) NSString      *result_type;

@end

///RTMapLocationManager类的protocol
@protocol RTMapLocationManagerDelegate <NSObject>

/*!
 @method
 @abstract  定位成功
 @param manager 定位引擎对象
 @param newLocation 当前点坐标
 @param beacons 参与定位的beacon信息数组
 @result void
 */

- (void)beaconManager:(RTMapLocationManager *)manager
  didUpdateToLocation:(IbeaconLocation *)newLocation
          withBeacons:(NSArray *) beacons;

/*!
 @method
 @abstract  定位失败
 @param manager 定位引擎对象
 @param result 定位失败返回结果
 @param beacons 参与定位的beacon信息数组
 @result void
 */
-(void)beaconManager:( RTMapLocationManager *)manager didFailLocation:(NSDictionary *)result withBeacons:(NSArray *) beacons;

/*!
 @method
 @abstract  获取定位点附近的POI信息成功
 @param poiInfoList POI信息数组，元素为RTLbsLocPoiInfo对象
 @result void
 */
-(void)getLocatePoiInfoSucess:(NSArray *)poiInfoList;
/*!
 @method
 @abstract  获取定位点附近的POI信息失败
 @param error 错误信息
 @result void
 */
-(void)getLocatePOiInfoFail:(NSString *)error;


@optional
/*!
 @method
 @abstract  重力感应
 @discussion nil
 @result void
 */

- (void) accelerometerx:(float)x y:(float)y z:(float)z;

/*!
 @method
 @abstract  罗盘值
 @discussion nil
 @result void
 */
- (void) iphoneRotation:(float)angle;

/*!
 @method
 @abstract  建筑物判断文件更新成功
 @discussion nil
 @result void
 */
- (void)updateBuildJudgeFinish;
/*!
 @method
 @abstract  建筑物判断文件更新失败
 @result void
 */
- (void)updateBuildJudgeFail:(NSString *)error;
/*!
 @method
 @abstract  指纹数据文件更新成功
 @result void
 */
- (void)updateFingerFinish;
/*!
 @method
 @abstract  指纹数据文件更新失败
 @discussion nil
 @result void
 */
- (void)updateFingerFail:(NSString *)error;
@end
