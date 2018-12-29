//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "ReusableView-Protocol.h"

@class NSString, UIView;

@interface CollectionReusableViewWithDivider : UICollectionReusableView <ReusableView>
{
    UIView *_bottomDividerView;
    UIView *_topDividerView;
}

+ (id)identifier;
@property(retain, nonatomic) UIView *topDividerView; // @synthesize topDividerView=_topDividerView;
@property(retain, nonatomic) UIView *bottomDividerView; // @synthesize bottomDividerView=_bottomDividerView;
- (void).cxx_destruct;
@property(nonatomic) _Bool topDividerHidden;
@property(nonatomic) _Bool bottomDividerHidden;
- (void)setDividersColor:(id)arg1;
- (void)layoutSubviews;
- (void)addElements;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
