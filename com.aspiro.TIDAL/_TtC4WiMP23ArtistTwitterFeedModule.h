//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP35ConfigurableCellTableViewController.h"

@class NSURL, UIView, _TtC4WiMP16BlurredImageView;

@interface _TtC4WiMP23ArtistTwitterFeedModule : _TtC4WiMP35ConfigurableCellTableViewController
{
    // Error parsing type: , name: showItemsCount
    // Error parsing type: , name: tableHeaderView
    // Error parsing type: , name: artistHeaderViewContainer
    // Error parsing type: , name: artist
    // Error parsing type: , name: profileUrl
    // Error parsing type: , name: contentMode
    // Error parsing type: , name: artistService.storage
    // Error parsing type: , name: artistHeaderView
}

+ (id)getInstanceWithCastedArtist:(id)arg1 profileUrl:(id)arg2 contentMode:(long long)arg3;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewOnTwitterDidTap:(id)arg1;
- (void)refresh:(id)arg1;
- (void)hideNoConnectionView;
- (void)showNoContentView;
@property(nonatomic) double heightConstraint;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic, copy) NSURL *profileUrl; // @synthesize profileUrl;
@property(nonatomic) __weak UIView *artistHeaderViewContainer; // @synthesize artistHeaderViewContainer;
@property(nonatomic) __weak _TtC4WiMP16BlurredImageView *tableHeaderView; // @synthesize tableHeaderView;
@property(nonatomic) long long showItemsCount; // @synthesize showItemsCount;

@end

