//
//  PaymentVC.h
//  UberNew
//
//  Carl's Mac - macbook on 26/09/14.
//  Copyright (c) 2014 Kc Tecnologies All rights reserved.
//

#import "BaseVC.h"
#import "PTKView.h"


@interface PaymentVC : BaseVC<UITextFieldDelegate,UIAlertViewDelegate>
{
    
}

///////// Actions


- (IBAction)scanBtnPressed:(id)sender;
- (IBAction)addPaymentBtnPressed:(id)sender;
- (IBAction)backBtnPressed:(id)sender;


///////// Property

@property (nonatomic,strong) NSString *strForID;
@property (nonatomic,strong) NSString *strForToken;

///// Outlets
@property (weak, nonatomic) IBOutlet UIImageView *imgAddPayment;

@property (weak, nonatomic) IBOutlet UIButton *btnAddPayment;
@property(weak, nonatomic) PTKView *paymentView;
@property (weak, nonatomic) IBOutlet UIButton *btnMenu;

@end
