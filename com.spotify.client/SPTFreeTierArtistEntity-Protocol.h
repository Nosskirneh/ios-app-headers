//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTFreeTierArtistImage;

@protocol SPTFreeTierArtistEntity <NSObject>
@property(copy, nonatomic) NSString *fileId;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> headerImage;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> image;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSURL *uri;
@end

