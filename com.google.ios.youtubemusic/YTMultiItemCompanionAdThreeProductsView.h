//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTMultiItemCompanionAdProductView-Protocol.h"

@class FLXLayout, NSArray, NSString;

@interface YTMultiItemCompanionAdThreeProductsView : UIView <YTMultiItemCompanionAdProductView>
{
    FLXLayout *_layout;
    NSArray *_thumbnails;
}

@property(readonly, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setProductListArray:(id)arg1;
- (id)root;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

