//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierCollectionItemViewModel-Protocol.h"

@class NSString;

@protocol SPTFreeTierCollectionPreviewableItemViewModel <SPTFreeTierCollectionItemViewModel>
@property(readonly, nonatomic) NSString *previewId;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isBanned) _Bool banned;
@end

