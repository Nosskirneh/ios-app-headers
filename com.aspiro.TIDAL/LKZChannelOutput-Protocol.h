//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;

@protocol LKZChannelOutput
- (void)close;
- (_Bool)truncateAtOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)writeData:(NSData *)arg1 error:(out id *)arg2;
- (_Bool)seekToOffset:(unsigned int)arg1 error:(out id *)arg2;
- (unsigned int)offset;
@end
