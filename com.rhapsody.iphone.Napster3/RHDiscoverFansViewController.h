//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class NSTimer, RHTrackMO, UILabel;

@interface RHDiscoverFansViewController : RHViewController
{
    UILabel *_textLabel;
    NSTimer *_hideDiscoverOtherTimer;
    RHTrackMO *_track;
}

@property(retain, nonatomic) RHTrackMO *track; // @synthesize track=_track;
@property(retain, nonatomic) NSTimer *hideDiscoverOtherTimer; // @synthesize hideDiscoverOtherTimer=_hideDiscoverOtherTimer;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)discoverOtherTapped:(id)arg1;
- (void)hideDiscoverOtherView;
- (void)showDiscoverOtherViewForTrack:(id)arg1;
- (void)viewDidLoad;

@end

