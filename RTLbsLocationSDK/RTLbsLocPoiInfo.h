//
//  RTLbsLocPoiInfo.h
//  BeaconLocation
//
//  Created by zhaoyubin on 15/12/24.
//  Copyright © 2015年 zhaoyubin. All rights reserved.
//

#import <Foundation/Foundation.h>
///Poi信息类
@interface RTLbsLocPoiInfo : NSObject
@property(nonatomic,copy)NSString *build_name;
@property(nonatomic,copy)NSString *floor;
@property(nonatomic,copy)NSString *poi_name;
@property(nonatomic,copy)NSString *poi_id;
@property(nonatomic,assign)BOOL is_inside;
@end
