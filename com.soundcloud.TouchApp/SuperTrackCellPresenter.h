//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, PlaylistFormatter;

@interface SuperTrackCellPresenter : NSObject
{
    NSNumberFormatter *_feedNumberFormatter;
    PlaylistFormatter *_playlistFormatter;
}

@property(readonly, nonatomic) PlaylistFormatter *playlistFormatter; // @synthesize playlistFormatter=_playlistFormatter;
@property(readonly, nonatomic) NSNumberFormatter *feedNumberFormatter; // @synthesize feedNumberFormatter=_feedNumberFormatter;
- (void).cxx_destruct;
- (id)hashTagForPresentable:(id)arg1;
- (void)presentTrackCellStats:(id)arg1 cardCellPresentable:(id)arg2;
- (void)presentTrackCell:(id)arg1 cardCellPresentable:(id)arg2;
- (id)initWithFeedNumberFormatter:(id)arg1 playlistFormatter:(id)arg2;
- (id)init;

@end

