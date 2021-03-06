//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemTableViewCell.h"

@class UIImageView, _TtC6Deezer17SampledCollection;

@interface DZRSampledCollectionTableViewCell : DZRLibraryItemTableViewCell
{
    UIImageView *_localIllustrationView;
    _TtC6Deezer17SampledCollection *_sampledCollection;
}

@property(retain, nonatomic) _TtC6Deezer17SampledCollection *sampledCollection; // @synthesize sampledCollection=_sampledCollection;
@property(nonatomic) __weak UIImageView *localIllustrationView; // @synthesize localIllustrationView=_localIllustrationView;
- (void).cxx_destruct;
- (_Bool)shouldDisplayPlayButton;
- (void)setOptionButtonHidden:(_Bool)arg1;
- (void)updateOptionButtonForSyncState:(long long)arg1;
- (void)updateDetailTextForSyncState:(long long)arg1;
- (void)setSyncState:(long long)arg1;
- (id)listenableItem;
- (_Bool)isEnabled;
- (void)populateWithSampledCollection:(id)arg1 style:(unsigned long long)arg2;
- (void)awakeFromNib;

@end

