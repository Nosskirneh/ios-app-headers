//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface GHKAssistantContactUsView : UIView
{
    NSArray *_contactUsButtons;
    NSArray *_topButtons;
}

- (void).cxx_destruct;
- (double)rightMarginForContactUsButtonAtIndex:(unsigned long long)arg1;
- (double)leftMarginForContactUsButtonAtIndex:(unsigned long long)arg1;
- (void)displayContactUsButtons:(id)arg1 topButtons:(id)arg2 renderShadow:(_Bool)arg3;
- (void)updateViewFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
