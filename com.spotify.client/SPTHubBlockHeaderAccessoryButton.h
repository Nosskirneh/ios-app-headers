//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "SPTThemableView-Protocol.h"

@class NSString;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTHubBlockHeaderAccessoryButton : UIButton <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned long long _blockIndex;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long blockIndex; // @synthesize blockIndex=_blockIndex;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)updateTitle;
- (void)applyThemeLayout;
- (id)initWithTitle:(id)arg1 blockIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

