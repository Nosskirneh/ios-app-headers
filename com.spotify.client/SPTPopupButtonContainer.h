//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPopupContainerView.h"

@class NSArray;

@interface SPTPopupButtonContainer : SPTPopupContainerView
{
    NSArray *_buttons;
    double _verticalButtonMargin;
}

@property(nonatomic) double verticalButtonMargin; // @synthesize verticalButtonMargin=_verticalButtonMargin;
@property(readonly, copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)rebuildConstraints;
- (id)initWithButtons:(id)arg1;

@end

