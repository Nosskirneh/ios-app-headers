//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXTileTrackTableViewCell.h"

@class NSAttributedString, NSDateFormatter, NSDictionary, NSLayoutConstraint, UIImageView, UILabel, VOXTrackAvailabilityIndicator;

@interface VOXStreamTrackTableViewCell : VOXTileTrackTableViewCell
{
    UIImageView *_likeIndicatorImageView;
    VOXTrackAvailabilityIndicator *_availabilityIndicator;
    UILabel *_menuLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    NSLayoutConstraint *_labelsLeftOffsetConstraint;
    UIImageView *_offlineIndicator;
    NSDictionary *_titleAttributes;
    NSDictionary *_subtitleAttributes;
    NSAttributedString *_attachmentString;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSAttributedString *attachmentString; // @synthesize attachmentString=_attachmentString;
@property(retain, nonatomic) NSDictionary *subtitleAttributes; // @synthesize subtitleAttributes=_subtitleAttributes;
@property(retain, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(nonatomic) __weak UIImageView *offlineIndicator; // @synthesize offlineIndicator=_offlineIndicator;
@property(nonatomic) __weak NSLayoutConstraint *labelsLeftOffsetConstraint; // @synthesize labelsLeftOffsetConstraint=_labelsLeftOffsetConstraint;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *menuLabel; // @synthesize menuLabel=_menuLabel;
@property(nonatomic) __weak VOXTrackAvailabilityIndicator *availabilityIndicator; // @synthesize availabilityIndicator=_availabilityIndicator;
@property(nonatomic) __weak UIImageView *likeIndicatorImageView; // @synthesize likeIndicatorImageView=_likeIndicatorImageView;
- (void).cxx_destruct;
- (void)configureOnlineMode;
- (void)configureOfflineMode;
- (id)usernameAttributedStringForPoster:(id)arg1 owner:(id)arg2;
- (void)reloadCellWithStreamTrackEntitiy:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)reloadCellWithSoundCloudTrackEntitiy:(id)arg1 stateIndicatorModel:(id)arg2;
- (void)setupMainLabelsAppearance;
- (id)getDateRepresentation:(id)arg1;
- (void)awakeFromNib;

@end
