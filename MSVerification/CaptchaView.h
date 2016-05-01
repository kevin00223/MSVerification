//
//  CaptchaView.h
//  MSVerification
//
//  Created by mr.scorpion on 16/5/1.
//  Copyright © 2016年 mr.scorpion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CaptchaView : UIView

@property (nonatomic, retain) NSArray *changeArray; //字符素材数组
@property (nonatomic, retain) NSMutableString *changeString;  //验证码的字符串

-(void)changeCaptcha;

@end
