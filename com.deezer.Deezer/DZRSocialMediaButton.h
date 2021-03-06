//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZFlatButton.h"

@class UIView;

@interface DZRSocialMediaButton : DZFlatButton
{
    UIView *_separatorView;
}

+ (id)backgroundColorForSocialMedia:(unsigned long long)arg1;
+ (id)titleForSocialMedia:(unsigned long long)arg1;
+ (id)imageForSocialMedia:(unsigned long long)arg1;
+ (id)buttonWithSocialMedia:(unsigned long long)arg1;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)commonSetup;

@end

