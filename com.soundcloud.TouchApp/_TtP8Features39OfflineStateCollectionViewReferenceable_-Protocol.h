//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, Urn;

@protocol _TtP8Features39OfflineStateCollectionViewReferenceable_ <NSObject>
- (void)deactivate;
- (void)updateForLikesWithDefaultTitle:(NSString *)arg1;
- (void)updateForPlaylistWithUrn:(Urn *)arg1 defaultTitle:(NSString *)arg2;
@property(nonatomic, readonly) UIView *view;
@end

