//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface DZRExtensionDataProvider : NSObject
{
    NSUserDefaults *_sharedData;
}

@property(retain, nonatomic) NSUserDefaults *sharedData; // @synthesize sharedData=_sharedData;
- (void).cxx_destruct;
- (void)playerDidChangeTrack:(id)arg1;
- (void)appendTrack:(id)arg1;
- (id)init;

@end

