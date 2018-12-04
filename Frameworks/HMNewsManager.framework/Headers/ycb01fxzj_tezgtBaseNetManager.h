//
//  ycb01fxzj_tezgtBaseNetManager.h
//  TMModule
//
//  Created by JD on 2018/9/13.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ycb01fxzj_tezgtBaseNetManager : NSObject
//+(void)postRequestWithUrl:(NSString *)requestUrl paramsDic:(NSDictionary *)dic;
+(void)postRequestWithUrl:(NSString *)requestUrl paramsDic:(NSDictionary *)dic success:(void(^)(NSDictionary*json))success fail:(void(^)(NSString *fail))failMessage;
@end
