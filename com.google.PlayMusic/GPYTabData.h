//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPYTabStyle, NSArray;

@interface GPYTabData : NSObject
{
    GPYTabStyle *_style;
    NSArray *_heroImageKeys;
    long long _heroImageIndex;
}

@property(nonatomic) long long heroImageIndex; // @synthesize heroImageIndex=_heroImageIndex;
@property(retain, nonatomic) NSArray *heroImageKeys; // @synthesize heroImageKeys=_heroImageKeys;
@property(retain, nonatomic) GPYTabStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;

@end
