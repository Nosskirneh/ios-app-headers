//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPMBMFFBox : NSObject
{
}

+ (id)lookupKey:(id)arg1 inData:(id)arg2 error:(id *)arg3;
+ (unsigned long long)endOfFirstChild:(id)arg1 error:(id *)arg2;
+ (id)lookupStringWithKeyPath:(id)arg1 expectedPrefixData:(id)arg2 inData:(id)arg3 error:(id *)arg4;
+ (id)lookupVersionedStringWithKeyPath:(id)arg1 inData:(id)arg2 error:(id *)arg3;
+ (id)stringWithExpectedPrefixData:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)trimExpectedPrefixData:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)trimVersionAndFlagsFromData:(id)arg1 error:(id *)arg2;
+ (id)lookupKeyPath:(id)arg1 expectedPrefixData:(id)arg2 inData:(id)arg3 error:(id *)arg4;
+ (id)splitKeyPath:(id)arg1 error:(id *)arg2;
+ (id)lookupKeyPath:(id)arg1 inData:(id)arg2 error:(id *)arg3;
+ (id)getRestOfList:(id)arg1 error:(id *)arg2;
+ (id)getFirstChildDataFromList:(id)arg1 error:(id *)arg2;
+ (id)getFirstChildKeyFromList:(id)arg1 error:(id *)arg2;
- (id)init;

@end

