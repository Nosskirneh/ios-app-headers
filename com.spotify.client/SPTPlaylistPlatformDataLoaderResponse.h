//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTPlaylistPlatformDataLoaderResponse : NSObject
{
    NSArray *_items;
    unsigned long long _unfilteredLength;
    unsigned long long _unrangedLength;
}

@property(nonatomic) unsigned long long unrangedLength; // @synthesize unrangedLength=_unrangedLength;
@property(nonatomic) unsigned long long unfilteredLength; // @synthesize unfilteredLength=_unfilteredLength;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

