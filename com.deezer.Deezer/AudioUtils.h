//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AudioUtils : NSObject
{
}

+ (_Bool)isFromMOD:(unsigned long long)arg1;
+ (id)typeKeyForListeningOrigin:(unsigned long long)arg1;
+ (unsigned long long)listeningOriginForContextKey:(id)arg1;
+ (id)contextKeyForListeningOrigin:(unsigned long long)arg1;
+ (unsigned long long)getAudioStoreForListeningOrigin:(unsigned long long)arg1;

@end

