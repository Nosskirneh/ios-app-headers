//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (SpotifyLink)
+ (id)spt_URLMosaicWithImageURLs:(id)arg1;
+ (id)spt_URLWithSpotifyLink:(const struct SpotifyLink *)arg1;
@property(readonly, nonatomic, getter=spt_cppLink) struct SpotifyLink link;
@end

