//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RHDataController, RHTrackMO, UIImageView, UILabel, UIView, ZDSPromise;

@interface RHTrackCell : UITableViewCell
{
    UILabel *_trackLabel;
    UILabel *_artistLabel;
    UILabel *_albumLabel;
    UIImageView *_albumImageView;
    UIImageView *_disclosureImageView;
    RHTrackMO *_track;
    RHDataController *_dataController;
    unsigned long long _state;
    UIView *_containerView;
    ZDSPromise *_albumImagePromise;
}

+ (double)cellHeight;
@property(retain, nonatomic) ZDSPromise *albumImagePromise; // @synthesize albumImagePromise=_albumImagePromise;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) RHTrackMO *track; // @synthesize track=_track;
@property(retain) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property(nonatomic) __weak UIImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(nonatomic) __weak UILabel *albumLabel; // @synthesize albumLabel=_albumLabel;
@property(nonatomic) __weak UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(nonatomic) __weak UILabel *trackLabel; // @synthesize trackLabel=_trackLabel;
- (void).cxx_destruct;
- (id)imageProvider;
- (struct UIEdgeInsets)layoutMargins;
- (void)configureForOnDemandPlayableStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setUpWithDataController:(id)arg1 track:(id)arg2;
- (void)layoutSubviews;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)awakeFromNib;

@end

