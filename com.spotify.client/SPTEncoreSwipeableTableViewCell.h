//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTSwipeableTableViewCell.h"

#import "SPTEncoreViewContainer-Protocol.h"

@protocol _TtP20EncoreConsumerMobile10EncoreView_;

@interface SPTEncoreSwipeableTableViewCell : SPTSwipeableTableViewCell <SPTEncoreViewContainer>
{
    // Error parsing type: , name: encoreView
    // Error parsing type: , name: onHighlight
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, retain) id <_TtP20EncoreConsumerMobile10EncoreView_> containedView;
@property(nonatomic, copy) CDUnknownBlockType onHighlight;

@end
