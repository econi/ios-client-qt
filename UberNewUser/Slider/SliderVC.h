//
//  SliderVC.h
//  Employee
//
//  Carl's Mac - macbook on 19/05/14.
//  Copyright (c) 2014 Elluminati MacBook Pro 1. All rights reserved.
//

#import "BaseVC.h"
#import "PickUpVC.h"
#import "CustomAlert.h"

@interface SliderVC : BaseVC<UITableViewDataSource,UITableViewDelegate,CustomAlertDelegate>

{
    UIViewController *frontVC;
    NSMutableArray *arrSlider,*arrImages;
    
}
@property(weak,nonatomic)IBOutlet UITableView *tblMenu;
@property (nonatomic,strong) PickUpVC *ViewObj;
@property (nonatomic, weak) IBOutlet UIImageView *imgProfilePic;
@property (weak, nonatomic) IBOutlet UILabel *lblName;
@property (weak, nonatomic) IBOutlet UIView *footerView;
@property (weak, nonatomic) IBOutlet UIView *viewForBG;

@end
