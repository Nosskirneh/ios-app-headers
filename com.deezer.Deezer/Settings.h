//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Settings : NSObject
{
    _Bool _allowsCarMode;
}

+ (id)sharedSettings;
@property(nonatomic) _Bool allowsCarMode; // @synthesize allowsCarMode=_allowsCarMode;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
@property(nonatomic) _Bool allowsPeekSound;
@property(nonatomic) _Bool allowsDownloadOver3G;
@property(nonatomic) _Bool hideGreyTracks;
- (id)init;

@end

