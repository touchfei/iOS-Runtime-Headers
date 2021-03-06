/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeletedObjectEntity : HDDataEntity

+ (Class)baseDataEntityClass;
+ (BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)deleteObjectsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5;
+ (id)insertDeletedObjectForObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5;
+ (int)preferredEntityType;
+ (BOOL)requiresSampleTypePredicate;

@end
