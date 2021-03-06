//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPTrackListCell.h"

@class NSDate, NSLayoutConstraint, NSString, UIImageView, UILabel, _TtC4WiMP20ProgressIndicatorPie;
@protocol _TtP4WiMP27PlayQueueSourceCellDelegate_;

@interface _TtC4WiMP25TrackListCellWithProgress : WMPTrackListCell
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: progressView
    // Error parsing type: , name: subtitleLeftToVideoIconConstraint
    // Error parsing type: , name: subtitleLeftToEditedIconConstraint
    // Error parsing type: , name: subtitleBootomEdgeConstraint
    // Error parsing type: , name: subtitleBootomToReleaseConstraint
    // Error parsing type: , name: isEditedIcon
    // Error parsing type: , name: videoIconImageView
    // Error parsing type: , name: trackTitle
    // Error parsing type: , name: trackArtist
    // Error parsing type: , name: releaseDurationLabel
    // Error parsing type: , name: progressObserver
    // Error parsing type: , name: playQueuePositionObserver
    // Error parsing type: , name: releaseDateText
    // Error parsing type: , name: itemIdentifier
    // Error parsing type: , name: playlistItemUuid
    // Error parsing type: , name: itemReleaseDate
    // Error parsing type: , name: isStreamable
    // Error parsing type: , name: isPlaying
    // Error parsing type: , name: type
    // Error parsing type: , name: contextMenuCallback
}

+ (double)cellHeight;
+ (id)nibName;
+ (id)cellIdentifier;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setEditedIconWithHidden:(_Bool)arg1;
- (void)showVideoIcon;
- (void)hideVideoIcon;
- (void)setWithProgress:(float)arg1 total:(float)arg2;
- (void)awakeFromNib;
@property(nonatomic, copy) CDUnknownBlockType contextMenuCallback; // @synthesize contextMenuCallback;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying;
@property(nonatomic) _Bool isStreamable; // @synthesize isStreamable;
@property(nonatomic, retain) NSDate *itemReleaseDate; // @synthesize itemReleaseDate;
@property(nonatomic, copy) NSString *playlistItemUuid; // @synthesize playlistItemUuid;
@property(nonatomic, copy) NSString *itemIdentifier; // @synthesize itemIdentifier;
@property(nonatomic, retain) UILabel *releaseDurationLabel; // @synthesize releaseDurationLabel;
@property(nonatomic, retain) UILabel *trackArtist; // @synthesize trackArtist;
@property(nonatomic, retain) UILabel *trackTitle; // @synthesize trackTitle;
@property(nonatomic, retain) UIImageView *videoIconImageView; // @synthesize videoIconImageView;
@property(nonatomic, retain) UIImageView *isEditedIcon; // @synthesize isEditedIcon;
@property(nonatomic, retain) NSLayoutConstraint *subtitleBootomToReleaseConstraint; // @synthesize subtitleBootomToReleaseConstraint;
@property(nonatomic, retain) NSLayoutConstraint *subtitleBootomEdgeConstraint; // @synthesize subtitleBootomEdgeConstraint;
@property(nonatomic, retain) NSLayoutConstraint *subtitleLeftToEditedIconConstraint; // @synthesize subtitleLeftToEditedIconConstraint;
@property(nonatomic, retain) NSLayoutConstraint *subtitleLeftToVideoIconConstraint; // @synthesize subtitleLeftToVideoIconConstraint;
@property(nonatomic, retain) _TtC4WiMP20ProgressIndicatorPie *progressView; // @synthesize progressView;
@property(nonatomic) __weak id <_TtP4WiMP27PlayQueueSourceCellDelegate_> delegate; // @synthesize delegate;

@end

