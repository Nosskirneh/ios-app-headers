//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWAResultingComponent-Protocol.h"

@class NSString, OrchSeparator;

@interface GWASeparatorView : UIView <GWAResultingComponent>
{
    UIView *_lineView;
    OrchSeparator *_proto;
}

- (void).cxx_destruct;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithProto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
