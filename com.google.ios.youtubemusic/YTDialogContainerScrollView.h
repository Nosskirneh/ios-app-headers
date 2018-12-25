//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "YTPageStyleProvider-Protocol.h"

@class GOODialogView, NSString;
@protocol YTPageStyleProvider;

@interface YTDialogContainerScrollView : UIScrollView <YTPageStyleProvider>
{
    GOODialogView *_dialogView;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(retain, nonatomic) GOODialogView *dialogView; // @synthesize dialogView=_dialogView;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long pageStyle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dialogView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
