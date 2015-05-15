//
//  ViewController.m
//  GitTop
//
//  Created by chenguandong on 15/5/15.
//  Copyright (c) 2015年 chenguandong. All rights reserved.
//

#import "WelcomeViewController.h"
#import "NetWorkTools.h"
@interface WelcomeViewController ()

@end

@implementation WelcomeViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [NetWorkTools checkNetworking:^(BOOL isNetwork) {
        if (isNetwork) {
            NSLog(@"有网络连接");
            
        }else{
            NSLog(@"没有网络连接");
        }
        
        [self performSegueWithIdentifier:@"Root" sender:self];
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
