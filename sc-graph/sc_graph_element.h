#ifndef SC_GRAPH_FIND_CONN_COMP_H
#define SC_GRAPH_FIND_CONN_COMP_H

#include "sc_graph_prerequest.h"
#include "sc_graph_types.h"

/* File contains functions to work with graph elements
 */
/*! Find connective components of the specified graph
 * \param graph sc-addr of graph structure to search connective components
 * \param sc_addr of a list of connective components; connective compoment is a graph
 * \return if connective components were found, return SC_RESULT_OK; otherwise return any error code
 */
sc_result sc_graph_find_conn_comp(sc_addr graph, sc_addr_list **conn_comp_set);

/*! Calculates the \p vertex degree of the \p graph
 * \param graph sc-addr of the graph structure which contains the vertex
 * \param vertex sc-addr of the vertex the dergeee of which needs calculating
 * \param result pointer to int that will contain the degree
 * \return If degree was found, return SC_RESULT_OK; otherwise returns any error code
 */
sc_result sc_graph_vertex_degree(const sc_addr graph, const sc_addr vertex, int *result);

/*! Check there is a regular graph
 * \param graph sc-addr of the graph structure which contains the vertex
 * \param result pointer to bool that will contain true if all vertex is the same or false if not
 * \return If graph is regular, return SC_RESULT_OK; otherwise returns any error code
 */
sc_result sc_graph_is_regular(sc_addr graph, sc_bool *rezult);

#endif // SC_GRAPH_FIND_CONN_COMP_H
