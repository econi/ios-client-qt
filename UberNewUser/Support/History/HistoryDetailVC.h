//
//  HistoryDetailVC.h
//  Rider Driver
//
//  Created by My Mac on 7/8/15.
//  Copyright (c) 2015 Kc Tecnologies All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseVC.h"

@interface HistoryDetailVC : BaseVC<UIAlertViewDelegate,UITableViewDataSource,UITableViewDelegate>
{
    __weak IBOutlet UITextField *txtSource;
    __weak IBOutlet UITextField *txtDestination;

    __weak IBOutlet UIView *viewForLocationInfo;
    
    __weak IBOutlet UILabel *lblMinutes;
    __weak IBOutlet UILabel *lblDistance;
    __weak IBOutlet UILabel *lblCost;
    
    __weak IBOutlet UITableView *tableForIssue;
    
    __weak IBOutlet UIImageView *mapImgView;
    
    NSString *strID;
}

@property (strong,nonatomic) NSDictionary *dictInfo;
@property (strong, nonatomic) NSString *type;
@property (weak, nonatomic) IBOutlet UIImageView *img1;
@property (weak, nonatomic) IBOutlet UIImageView *img2;
@property (weak, nonatomic) IBOutlet UIImageView *img3;
@property (weak, nonatomic) IBOutlet UIButton *btnNavigationTitle;
@property (weak, nonatomic) IBOutlet UIView *viewForBottom;
@property (weak, nonatomic) IBOutlet UIButton *btnCancelRequest;
@property (weak, nonatomic) IBOutlet UILabel *lblTellUsWhy;
@property (weak, nonatomic) IBOutlet UILabel *lblDriverDelay;
@property (weak, nonatomic) IBOutlet UILabel *lblChangedMind;
@property (weak, nonatomic) IBOutlet UILabel *lblBookAnotherCab;

- (IBAction)onClickBtnCancelRequest:(id)sender;

- (IBAction)btnNeedHelpPressed:(id)sender;
- (IBAction)btnBackPressed:(id)sender;
- (IBAction)btnSharePressed:(id)sender;
@property (strong, nonatomic) IBOutlet UIView *viewForCancelLaterRequest;
- (IBAction)onClickBtnDelay:(id)sender;

- (IBAction)onClickBtnChanged:(id)sender;
- (IBAction)onClickBookCab:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *btnOneCheck;
@property (strong, nonatomic) IBOutlet UIButton *btnTwoCheck;
@property (strong, nonatomic) IBOutlet UIButton *btnThreeCheck;
@property (weak, nonatomic) IBOutlet UIButton *btnOK;
- (IBAction)onClickOKCancel:(id)sender;

@end
