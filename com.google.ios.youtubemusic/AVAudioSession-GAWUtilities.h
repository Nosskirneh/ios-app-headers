//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioSession.h>

@interface AVAudioSession (GAWUtilities)
+ (void)gaw_applicationBecameActive:(id)arg1;
+ (void)gaw_listenForActive:(_Bool)arg1;
- (_Bool)gaw_setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)gaw_setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)gaw_setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)gaw_setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)gaw_setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)gaw_shouldOverride;
@end

