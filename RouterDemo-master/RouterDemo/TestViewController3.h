//
//  TestViewController3.h
//  RouterDemo
//
//  Created by thf on 2018/7/16.
//  Copyright © 2018年 thf. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef  void(^btnClickBlock)(NSString *);

@interface TestViewController3 : UIViewController
@property (nonatomic, copy)btnClickBlock clicked;
@end
