//
//  DSProviderUpdateServiceTransactionsViewController.h
//  DashSync_Example
//
//  Created by Sam Westrich on 3/3/19.
//  Copyright © 2019 Dash Core Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DSLocalMasternode;

NS_ASSUME_NONNULL_BEGIN

@interface DSProviderUpdateServiceTransactionsViewController : UITableViewController

@property (nonatomic, strong) DSLocalMasternode *localMasternode;

@end

NS_ASSUME_NONNULL_END
