//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol AFSDKStorageProtocol
- (void)save;
- (void)removeKey:(NSString *)arg1;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (void)setDictionary:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)setString:(NSString *)arg1 forKey:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
@end

