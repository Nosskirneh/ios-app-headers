//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZOObject.h"

@class NSDate, NSString;

@interface DZOAlbum : DZOObject
{
    NSDate *dateOfRelease;
    NSString *artistName;
}

+ (id)applicationProperties;
+ (id)openMappingDictionary;
+ (id)albumWithDeezerId:(id)arg1;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName;
@property(retain, nonatomic) NSDate *dateOfRelease; // @synthesize dateOfRelease;
- (void).cxx_destruct;
- (id)queueableCollection;
- (long long)coverType;
- (void)dzoPlayerProxyRandomTrack:(id)arg1;
- (unsigned long long)dzoPlayerProxyListeningOrigin;
- (id)dzoPlayerProxyPlayable;

@end

