//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class MDCTextField, MDCTextInputControllerLegacyDefault, NSArray, NSString, QTMButton, UIImageView, UITableView;
@protocol GA11YMixinImpl, YTPageStyleProvider;

@interface YTFormfillPhoneRegionPickerView : UIView <GA11YMixinEmbedder, UITableViewDataSource, UITableViewDelegate, YTPageStyleProvider, YTPageStyling>
{
    NSArray *_regionData;
    MDCTextInputControllerLegacyDefault *_regionSearchController;
    QTMButton *_cancelButton;
    UIImageView *_regionSearchImageView;
    id <GA11YMixinImpl> _accessibilityMixin;
    MDCTextField *_regionSearchField;
    UITableView *_tableView;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

+ (double)rowHeight:(id)arg1;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) MDCTextField *regionSearchField; // @synthesize regionSearchField=_regionSearchField;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
@property(readonly, nonatomic) double preferredContentHeight;
- (void)addCancelTappedTarget:(id)arg1 action:(SEL)arg2;
- (void)addOnRegionSearchTextChangedTarget:(id)arg1 action:(SEL)arg2;
- (void)setRegionData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithRegions:(id)arg1 tableDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

