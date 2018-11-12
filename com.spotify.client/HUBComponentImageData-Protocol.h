//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBSerializable-Protocol.h"

@class NSDictionary, NSString, NSURL, UIImage;
@protocol HUBIcon;

@protocol HUBComponentImageData <HUBSerializable>
@property(readonly, copy, nonatomic) NSDictionary *customData;
@property(readonly, nonatomic) UIImage *localImage;
@property(readonly, nonatomic) id <HUBIcon> placeholderIcon;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

