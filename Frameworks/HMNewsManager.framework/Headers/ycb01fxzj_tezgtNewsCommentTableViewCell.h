//
//  ycb01fxzj_tezgtNewsCommentTableViewCell.h
//  TMModule
//
//  Created by JD on 2018/9/27.
//  Copyright © 2018年 JD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ycb01fxzj_tezgtCommentModel.h"
@interface ycb01fxzj_tezgtNewsCommentTableViewCell : UITableViewCell
@property (nonatomic,strong)UIImageView *avatarImg;
@property (nonatomic,strong)UILabel *nameLab;
@property (nonatomic,strong)UILabel *timeLab;
@property (nonatomic,strong)UIImageView *priseImg;
@property (nonatomic,strong)UILabel *priseLab;
@property (nonatomic,strong)UILabel *contentLab;
@property (nonatomic,strong)void(^clickModel)(void);

@property (nonatomic,strong)ycb01fxzj_tezgtCommentModel *model;
@end
