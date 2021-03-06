//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBJSONCompatibleBuilder-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, UIImage;
@protocol HUBComponentImageData;

@protocol HUBComponentImageDataBuilder <HUBJSONCompatibleBuilder>
@property(readonly, nonatomic) NSMutableDictionary *customData;
@property(retain, nonatomic) UIImage *localImage;
@property(copy, nonatomic) NSString *placeholderIconIdentifier;
@property(copy, nonatomic) NSURL *URL;
- (id <HUBComponentImageData>)buildWithIdentifier:(NSString *)arg1 type:(long long)arg2;
@end

