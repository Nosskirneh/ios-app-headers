//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SASLoaderView : UIView
{
    long long _loaderType;
}

@property(readonly) long long loaderType; // @synthesize loaderType=_loaderType;
- (_Bool)hasEnoughSpaceForLabel;
- (void)animateActivityIndicatorIcon:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 loader:(long long)arg2;
- (void)addActivityViews;

@end

