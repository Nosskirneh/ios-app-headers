//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DZRContentPageHeaderViewProtocol-Protocol.h"

@class NSString, UILabel;

@interface DZRTalkShowContentPageHeaderView : UIView <DZRContentPageHeaderViewProtocol>
{
    UILabel *_talkNameLabel;
}

@property(nonatomic) __weak UILabel *talkNameLabel; // @synthesize talkNameLabel=_talkNameLabel;
- (void).cxx_destruct;
- (void)populateWithItem:(id)arg1;
- (void)populateWithTalkShow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

