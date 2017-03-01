//
//  UIImageView+Download.h
//  SalesPoint
//
//  Carl's Mac - macbook on 09/10/13.
//  Copyright (c) 2013 Elluminati MacBook Pro 1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (Download)

-(void)downloadFromURL:(NSString *)url withPlaceholder:(UIImage *)placehold;

@end