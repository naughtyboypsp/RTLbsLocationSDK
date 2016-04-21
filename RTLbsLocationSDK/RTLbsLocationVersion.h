//
//  RTLbsLocationVersion.h
//  BeaconLocation
//
//  Created by zhaoyubin on 15/8/12.
//  Copyright (c) 2015年 zhaoyubin. All rights reserved.
//

#import <UIKit/UIKit.h>
/*****更新日志：*****
 SDK V2.0.1   so库 V6.4.1
 在线定位数据包添加licenseKey
 
 SDK V2.1     so库 V6.4.1
 优化定位逻辑
 添加设置定位频率的属性
 添加手动更新建筑物判断和指纹数据接口
 
 SDK V2.2     so库 V6.4.1
 优化定位初始化逻辑，缩短初始化时间
 提高定位稳定性
 
 SDK V2.3     so库 V6.4.1
 定位出错信息中添加beacon数量、蓝牙及网络状态信息
 增加地图约束功能
 
 SDK V2.4     so库 V6.6.3
 增加多UUID支持
 增加气压测高，提高楼层判断的准确度
 
 SDK V2.4.1   so库 V6.6.3
 添加场景API接口
 
 SDK V2.5   so库 V6.7.2
 优化PDR推算逻辑，提高定位稳定性
 优化beacon加解密算法
 
 *********************/

/**
 *获取当前定位API的版本号
 *return  返回当前API的版本号
 */
UIKIT_STATIC_INLINE NSString * RtmapGetLocationApiVersion()
{
    return @"2.5";
}
