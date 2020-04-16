

#ifndef HARD_WORK_H_
#define HARD_WORK_H_


void first_round() {


//==================================================================
	vector<students>::iterator STU = stu.begin() ;
	vector<preferences>::iterator PREF = pref.begin() ;
	vector<capacity_class>::iterator CAPACITY = capacities.begin() ;
	vector<course_eli>::iterator COURSES = course.begin() ;
	vector<eligibility>::iterator ELIGIBLE = eligiblities.begin() ;
//=========================================================================


	int counter =0 ;
	int cycle = 1 ;

while(cycle<6){

	// sort by ranking of A
	sort(stu.begin(),stu.end(),sort_by_A) ;
	STU = stu.begin() ;
	while ((STU != stu.end())) {
		if (STU->getRankA()!="-1"){
		if (STU->getAllocCentId()=="NA") {
		PREF = pref.begin() ;
		while(PREF != pref.end()){
			if (PREF->getPrefNo()==to_string(cycle)){
				if(STU->getFormNo()==PREF->getFormNo()){
					ELIGIBLE = eligiblities.begin() ;
					while(ELIGIBLE != eligiblities.end()){
						if (ELIGIBLE->getCourse()==PREF->getCourseName()){
							if (ELIGIBLE->getEligibilitys()==STU->getDegree()){
								COURSES = course.begin() ;
								while(COURSES != course.end()){
									if (COURSES->getCcatSection()=="A") {
										if (PREF->getCourseName()==COURSES->getCourseName()){
											CAPACITY = capacities.begin() ;
											while (CAPACITY != capacities.end()){
												if (PREF->getCenterId()==CAPACITY->getCenterId()){
													if (PREF->getCourseName()==CAPACITY->getCourseName()){
														if (CAPACITY->getFilledCapacity() != CAPACITY->getMaxCapacity()){
/*

												cout<<"selected course : "<<PREF->getCourseName()<<endl ;
												cout<<"selected pref : "<<PREF->getPrefNo()<<endl ;
												cout<<"studnt branch : "<<STU->getDegree()<<endl;
												cout<<"Eligible banch : "<<ELIGIBLE->getEligibilitys()<<endl ;
												cout<<"CCAT section : "<<COURSES->getCcatSection()<<endl ;
												cout<<"ceter id : "<<CAPACITY->getCenterId()<<endl;
												cout<<"course name : "<<CAPACITY->getCourseName() <<endl;
												cout<<"\n\n\n\n"<<endl;
*/

												counter++ ;
															STU->setAllocPref(PREF->getPrefNo()) ;
															STU->setAllocCourse(PREF->getCourseName()) ;
															STU->setAllocCentId(CAPACITY->getCenterId()) ;
															if (CAPACITY->getFilledCapacity()=="NA")
																CAPACITY->setFilledCapacity("0") ;
															CAPACITY->setFilledCapacity(to_string(1+stoi(CAPACITY->getFilledCapacity()))) ;
//															STU->display() ;
														}
													}
												}
												CAPACITY++ ;
											}
										}
									}
									COURSES++ ;
								}
							}
						}
						ELIGIBLE++ ;
					}
				}
			}
			PREF++ ;
		}
		}
		}
		STU++ ;
	}

	// sort by ranking of B
		sort(stu.begin(),stu.end(),sort_by_B) ;
		STU = stu.begin() ;
		while (((STU != stu.end()))) {
			if (STU->getRankB()!="-1"){
			if (STU->getAllocCentId()=="NA") {
			PREF = pref.begin() ;
			while(PREF != pref.end()){
				if (PREF->getPrefNo()==to_string(cycle)){
					if(STU->getFormNo()==PREF->getFormNo()){
						ELIGIBLE = eligiblities.begin() ;
						while(ELIGIBLE != eligiblities.end()){
							if (ELIGIBLE->getCourse()==PREF->getCourseName()){
								if (ELIGIBLE->getEligibilitys()==STU->getDegree()){
									COURSES = course.begin() ;
									while(COURSES != course.end()){
										if (COURSES->getCcatSection()=="B") {
											if (PREF->getCourseName()==COURSES->getCourseName()){
												CAPACITY = capacities.begin() ;
												while (CAPACITY != capacities.end()){
													if (PREF->getCenterId()==CAPACITY->getCenterId()){
														if (PREF->getCourseName()==CAPACITY->getCourseName()){
															if (CAPACITY->getFilledCapacity() != CAPACITY->getMaxCapacity()){
/*

													cout<<"selected course : "<<PREF->getCourseName()<<endl ;
													cout<<"selected pref : "<<PREF->getPrefNo()<<endl ;
													cout<<"studnt branch : "<<STU->getDegree()<<endl;
													cout<<"Eligible banch : "<<ELIGIBLE->getEligibilitys()<<endl ;
													cout<<"CCAT section : "<<COURSES->getCcatSection()<<endl ;
													cout<<"ceter id : "<<CAPACITY->getCenterId()<<endl;
													cout<<"course name : "<<CAPACITY->getCourseName() <<endl;
													cout<<"\n\n\n\n"<<endl;
*/

													counter++ ;
																STU->setAllocPref(PREF->getPrefNo()) ;
																STU->setAllocCourse(PREF->getCourseName()) ;
																STU->setAllocCentId(CAPACITY->getCenterId()) ;
																if (CAPACITY->getFilledCapacity()=="NA")
																	CAPACITY->setFilledCapacity("0") ;
																CAPACITY->setFilledCapacity(to_string(1+stoi(CAPACITY->getFilledCapacity()))) ;
	//															STU->display() ;
															}
														}
													}
													CAPACITY++ ;
												}
											}
										}
										COURSES++ ;
									}
								}
							}
							ELIGIBLE++ ;
						}
					}
				}
				PREF++ ;
			}
			}
			}
			STU++ ;
		}

		// sort by ranking of B
				sort(stu.begin(),stu.end(),sort_by_C) ;
				STU = stu.begin() ;
				while (((STU != stu.end()))) {
					if (STU->getRankC()!="-1"){
					if (STU->getAllocCentId()=="NA") {
					PREF = pref.begin() ;
					while(PREF != pref.end()){
						if (PREF->getPrefNo()==to_string(cycle)){
							if(STU->getFormNo()==PREF->getFormNo()){
								ELIGIBLE = eligiblities.begin() ;
								while(ELIGIBLE != eligiblities.end()){
									if (ELIGIBLE->getCourse()==PREF->getCourseName()){
										if (ELIGIBLE->getEligibilitys()==STU->getDegree()){
											COURSES = course.begin() ;
											while(COURSES != course.end()){
												if (COURSES->getCcatSection()=="C") {
													if (PREF->getCourseName()==COURSES->getCourseName()){
														CAPACITY = capacities.begin() ;
														while (CAPACITY != capacities.end()){
															if (PREF->getCenterId()==CAPACITY->getCenterId()){
																if (PREF->getCourseName()==CAPACITY->getCourseName()){
																	if (CAPACITY->getFilledCapacity() != CAPACITY->getMaxCapacity()){
/*
															cout<<"selected course : "<<PREF->getCourseName()<<endl ;
															cout<<"selected pref : "<<PREF->getPrefNo()<<endl ;
															cout<<"studnt branch : "<<STU->getDegree()<<endl;
															cout<<"Eligible banch : "<<ELIGIBLE->getEligibilitys()<<endl ;
															cout<<"CCAT section : "<<COURSES->getCcatSection()<<endl ;
															cout<<"ceter id : "<<CAPACITY->getCenterId()<<endl;
															cout<<"course name : "<<CAPACITY->getCourseName() <<endl;
															cout<<"\n\n\n\n"<<endl;
*/
															counter++ ;
																		STU->setAllocPref(PREF->getPrefNo()) ;
																		STU->setAllocCourse(PREF->getCourseName()) ;
																		STU->setAllocCentId(CAPACITY->getCenterId()) ;
																		if (CAPACITY->getFilledCapacity()=="NA")
																			CAPACITY->setFilledCapacity("0") ;
																		CAPACITY->setFilledCapacity(to_string(1+stoi(CAPACITY->getFilledCapacity()))) ;
			//															STU->display() ;
																	}
																}
															}
															CAPACITY++ ;
														}
													}
												}
												COURSES++ ;
											}
										}
									}
									ELIGIBLE++ ;
								}
							}
						}
						PREF++ ;
					}
					}
					}
					STU++ ;
				}

	//cerr<<"\nIterative cycel : "<<cycle <<endl ; cout<<"\n\n\n"<<endl ;
	cerr<<"prefrence : "<<cycle<<endl ;
	cycle++ ;

}




}




#endif /* HARD_WORK_H_ */