//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MSAServiceClientIVIEventsDelegate <NSObject>
- (void)receivedAudioStatus:(unsigned char)arg1 forType:(unsigned char)arg2 requestID:(unsigned int)arg3;
- (void)phoneCallStateDidChange:(unsigned char)arg1;
@end

