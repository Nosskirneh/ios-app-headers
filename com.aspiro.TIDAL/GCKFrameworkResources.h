//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBundle;

@interface GCKFrameworkResources : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)storyboardNamed:(id)arg1;
- (id)nibNamed:(id)arg1 owner:(id)arg2 replacementObjects:(id)arg3;
- (id)imageNamed:(id)arg1 withRenderingMode:(long long)arg2;
- (id)imageNamed:(id)arg1;
- (id)init;

@end
