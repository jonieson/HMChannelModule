//
//  ycb01fxzj_tezgtPDModel.h
//  NewsManager
//
//  Created by JD on 2018/9/25.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ycb01fxzj_tezgtPDModel : NSObject
@property (nonatomic,strong)NSString *pdId;
@property (nonatomic,strong)NSString *imgUrl;
@property (nonatomic,strong)NSString *typeName;
+(ycb01fxzj_tezgtPDModel *)jsonWithModel:(NSDictionary *)dic;
@end
