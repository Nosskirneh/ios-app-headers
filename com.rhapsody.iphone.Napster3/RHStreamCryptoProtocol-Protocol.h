//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol RHStreamCryptoProtocol <NSObject>
- (void)decryptMemory:(void *)arg1 ofLength:(unsigned long long)arg2 atOffsetIntoFile:(unsigned long long)arg3;
- (void)encryptMemory:(void *)arg1 ofLength:(unsigned long long)arg2 atOffsetIntoFile:(unsigned long long)arg3;
- (_Bool)encryptionIsResumable;
- (NSData *)decryptData:(NSData *)arg1;
@end

