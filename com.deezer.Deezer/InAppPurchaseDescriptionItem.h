//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface InAppPurchaseDescriptionItem : UIView
{
    UIImageView *image;
    UILabel *title;
    UILabel *description;
}

@property(retain, nonatomic) UILabel *description; // @synthesize description;
@property(retain, nonatomic) UILabel *title; // @synthesize title;
@property(retain, nonatomic) UIImageView *image; // @synthesize image;
- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 description:(id)arg2 imageName:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
